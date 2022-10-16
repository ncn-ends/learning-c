#!/bin/bash

last_edited_file=`ls ./concepts -Art | tail -n 1`
cc concepts/${last_edited_file} && ./a.out