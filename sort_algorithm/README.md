
## benchmark

#### ARRA_SIZE=100
```
benchmark name                       samples       iterations    estimated
                                     mean          low mean      high mean
                                     std dev       low std dev   high std dev
-------------------------------------------------------------------------------
bubble_sort                                    100             1    248.454 ms 
                                        2.59555 ms    2.52407 ms    2.68983 ms 
                                        417.363 us    333.042 us    551.615 us

bubble_sort_quicker                            100             1    250.576 ms 
                                        2.56563 ms    2.50437 ms    2.63922 ms 
                                        340.389 us    288.769 us    418.071 us

insertion_sort                                 100             2    142.183 ms 
                                        979.235 us    859.329 us    1.21685 ms 
                                        827.001 us    491.941 us    1.39143 ms

quick_sort                                     100            10     98.488 ms 
                                        94.0854 us    92.9416 us    95.4293 us 
                                        6.31179 us     5.4624 us    8.14089 us

merge_sort                                     100             6    107.689 ms 
                                        147.433 us    143.704 us    151.742 us 
                                        20.4209 us    17.7936 us    23.8054 us
                                        
heap_sort                                      100             8    96.1408 ms 
                                        133.656 us    129.897 us     138.19 us 
                                        20.9808 us    17.8842 us    24.8925 us
```
