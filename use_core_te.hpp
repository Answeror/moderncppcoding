np::real score(
    const classifier &clf,
    const np::mat &X,
    const np::ivec &y_true
) {
    auto y_pred = clf.predict(X);
    // compare y_pred and y_true
}
...
score(QDA(), X, y_true);
