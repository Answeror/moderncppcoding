auto clf = load_qda(); // copy returned qda to clf
auto X = load_data(); // (rvalue) copy returned data
auto y = clf.predict(X);
