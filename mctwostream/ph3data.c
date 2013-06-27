#define NWL3 305

const float swl3[NWL3+1] = {
  400, 401, 402, 403, 404, 405, 406, 407, 408, 409, 410, 411, 
  412, 413, 414, 415, 416, 417, 418, 419, 420, 421, 422, 423, 
  424, 425, 426, 427, 428, 429, 430, 431, 432, 433, 434, 435, 
  436, 437, 438, 439, 440, 441, 442, 443, 444, 445, 446, 447, 
  448, 449, 450, 451, 452, 453, 454, 455, 456, 457, 458, 459, 
  460, 461, 462, 463, 464, 465, 466, 467, 468, 469, 470, 471, 
  472, 473, 474, 475, 476, 477, 478, 479, 480, 481, 482, 483, 
  484, 485, 486, 487, 488, 489, 490, 491, 492, 493, 494, 495, 
  496, 497, 498, 499, 500, 501, 502, 503, 504, 505, 506, 507, 
  508, 509, 510, 511, 512, 513, 514, 515, 516, 517, 518, 519, 
  520, 521, 522, 523, 524, 525, 526, 527, 528, 529, 530, 531, 
  532, 533, 534, 535, 536, 537, 538, 539, 540, 541, 542, 543, 
  544, 545, 546, 547, 548, 549, 550, 551, 552, 553, 554, 555, 
  556, 557, 558, 559, 560, 561, 562, 563, 564, 565, 566, 567, 
  568, 569, 570, 571, 572, 573, 574, 575, 576, 577, 578, 579, 
  580, 581, 582, 583, 584, 585, 586, 587, 588, 589, 590, 591, 
  592, 593, 594, 595, 596, 597, 598, 599, 600, 601, 602, 603, 
  604, 605, 606, 607, 608, 609, 610, 611, 612, 613, 614, 615, 
  616, 617, 618, 619, 620, 621, 622, 623, 624, 625, 626, 627, 
  628, 629, 630, 631, 632, 633, 634, 635, 636, 637, 638, 639, 
  640, 641, 642, 643, 644, 645, 646, 647, 648, 649, 650, 651, 
  652, 653, 654, 655, 656, 657, 658, 659, 660, 661, 662, 663, 
  664, 665, 666, 667, 668, 669, 670, 671, 672, 673, 674, 675, 
  676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 
  688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 
  700, 701, 702, 703, 704, 705
};

const float s0_3[NWL3] = {
  0.0e-19, 0.1e-19, 0.1e-19, 0.3e-19, 0.2e-19, 0.5e-19, 0.3e-19,
  0.1e-19, 0.3e-19, 0.5e-19, 0.6e-19, 0.5e-19, 0.3e-19, 0.7e-19,
  0.7e-19, 0.6e-19, 0.3e-19, 0.4e-19, 0.6e-19, 0.9e-19, 0.9e-19, 0.9e-19,
  0.8e-19, 1.e-19, 1.2e-19, 1.3e-19, 0.9e-19, 0.8e-19, 1.2e-19, 1.2e-19,
  1.2e-19, 1.5e-19, 1.4e-19, 1.5e-19, 1.7e-19, 2.1e-19, 2.1e-19,
  1.8e-19, 1.8e-19, 2.1e-19, 1.9e-19, 1.9e-19, 2.e-19, 1.9e-19, 2.1e-19,
  2.3e-19, 2.3e-19, 2.5e-19, 2.8e-19, 2.8e-19, 2.7e-19, 2.8e-19,
  3.1e-19, 3.2e-19, 3.4e-19, 3.5e-19, 3.2e-19, 3.4e-19, 3.7e-19, 3.9e-19,
  3.9e-19, 3.6e-19, 3.5e-19, 3.8e-19, 4.1e-19, 4.5e-19, 4.5e-19,
  4.8e-19, 5.e-19, 5.2e-19, 4.9e-19, 5.e-19, 5.4e-19, 5.5e-19, 5.6e-19,
  5.9e-19, 6.4e-19, 6.8e-19, 6.6e-19, 6.4e-19, 6.4e-19, 6.5e-19,
  6.3e-19, 6.1e-19, 6.2e-19, 6.6e-19, 7.4e-19, 8.e-19, 8.e-19, 8.6e-19,
  9.3e-19, 9.2e-19, 8.9e-19, 8.9e-19, 8.8e-19, 9.1e-19, 10.4e-19,
  11.2e-19, 10.8e-19, 10.3e-19, 9.8e-19, 9.4e-19, 9.1e-19, 9.5e-19,
  10.5e-19, 11.6e-19, 11.9e-19, 11.4e-19, 10.6e-19, 11.2e-19, 13.e-19,
  15.1e-19, 16.1e-19, 15.1e-19, 14.1e-19, 14.0e-19, 14.0e-19, 13.0e-19,
  12.1e-19, 12.8e-19, 14.4e-19, 15.8e-19, 17.2e-19, 16.6e-19, 15.e-19,
  13.8e-19, 13.7e-19, 15.1e-19, 17.9e-19, 21.e-19, 20.9e-19, 19.1e-19,
  18.1e-19, 17.3e-19, 17.7e-19, 20.2e-19, 23.2e-19, 23.8e-19, 21.1e-19,
  18.8e-19, 18.1e-19, 16.8e-19, 16.8e-19, 14.3e-19, 13.9e-19, 16.2e-19,
  20.4e-19, 25.6e-19, 27.5e-19, 24.9e-19, 22.4e-19, 21.4e-19, 21.6e-19,
  22.2e-19, 24.5e-19, 27.8e-19, 29.5e-19, 30.e-19, 31.7e-19, 34.3e-19,
  32.3e-19, 28.5e-19, 26.8e-19, 25.9e-19, 24.8e-19, 24.7e-19, 25.8e-19,
  25.5e-19, 25.7e-19, 26.3e-19, 25.3e-19, 25.1e-19, 24.8e-19, 24.7e-19,
  25.5e-19, 27.e-19,  29.2e-19, 30.5e-19, 30.3e-19, 29.4e-19, 29.9e-19,
  32.e-19, 31.e-19, 26.8e-19, 24.7e-19, 24.6e-19, 27.5e-19, 34.8e-19,
  44.8e-19, 55.2e-19, 56.7e-19, 51.9e-19, 48.3e-19, 43.2e-19, 39.2e-19,
  39.1e-19, 41.6e-19, 40.9e-19, 35.4e-19, 28.9e-19, 24.5e-19, 24.5e-19,
  28.4e-19, 33.9e-19, 40.e-19, 41.8e-19, 33.8e-19, 23.2e-19, 15.9e-19,
  13.3e-19, 13.5e-19, 14.3e-19, 16.9e-19, 21.7e-19, 22.4e-19, 19.9e-19,
  17.4e-19, 16.7e-19, 18.3e-19, 20.2e-19, 24.7e-19, 39.8e-19, 76.1e-19,
  120.4e-19, 116.6e-19, 86.5e-19, 70.e-19, 69.e-19, 68.9e-19, 67.e-19,
  64.1e-19, 50.2e-19, 32.7e-19, 19.9e-19, 13.2e-19, 10.6e-19, 12.3e-19,
  16.4e-19, 17.6e-19, 13.4e-19, 9.8e-19, 7.8e-19, 6.8e-19, 6.9e-19,
  7.1e-19, 6.7e-19, 5.6e-19, 4.9e-19, 4.8e-19, 3.7e-19, 3.2e-19, 3.3e-19,
  3.9e-19, 4.7e-19, 5.7e-19, 6.9e-19, 8.9e-19, 11.8e-19, 16.8e-19,
  27.6e-19, 51.2e-19, 101.5e-19, 170.8e-19, 170.4e-19, 115.4e-19, 73.5e-19,
  48.6e-19, 29.7e-19, 17.5e-19, 10.7e-19, 7.5e-19, 6.0e-19, 5.7e-19,
  4.7e-19, 3.6e-19, 3.0e-19, 3.1e-19, 4.0e-19, 5.5e-19, 5.9e-19, 4.9e-19,
  3.5e-19, 2.5e-19, 1.6e-19, 0.9e-19, 0.5e-19, 0.3e-19, 0.2e-19,
  0.4e-19, 0.2e-19, 0.1e-19, 0.e-19, 0.0e-19, 0.1e-19, 0.1e-19, 0.2e-19,
  0.4e-19, 0.4e-19, 0.4e-19, 0.4e-19, 0.3e-19, 0.2e-19, 0.2e-19, 0.1e-19, 0.0
};
