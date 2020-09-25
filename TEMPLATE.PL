#!/usr/bin/perl

package Template;

use v5.18;

use strict;
use warnings;
use File::Copy qw/copy/;

sub new {
    my $class = shift;
    my $self = {};
    return bless $self, $class;
}

sub run {
    my $self = shift;

    # Parse Args
    die "Invalid argument" unless scalar @ARGV >= 1;
    my $contest_dir = shift @ARGV;
    my $template_dir = 'abc';

    # Copy
    mkdir $contest_dir
        or die "Failed to `mkdir $contest_dir`: $!";

    # copy glob
    chdir $template_dir
        or die "Fialed to `cd $template_dir`: $!";
    my @srcs = glob "CMakeLists.txt *.cpp";
    # print Dumper \@sources;
    for my $src (glob "CMakeLists.txt *.cpp") {
        my $dst = "../$contest_dir/$src";
        copy($src, $dst)
            or die "Failed to `cp $src $dst`: $!";
    }

}

package main;

Template->new->run;

1;
