np::mat a = ...;
np::vec mean_of_each_row = np::map(np::mean, np::rows(a));
np::vec mean_of_each_col = np::map(np::mean, np::cols(a));
