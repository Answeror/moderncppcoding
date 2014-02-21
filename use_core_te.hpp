np::real score(
    const classifier &clf,
    const np::mat &X,
    const np::ivec &y_true
) {
    auto y_pred = clf.predict(X);
    // compare y_pred and y_true
}
...
score(classifier_ml<QDA>(qda), X, y_true);
score(classifier_yaml<AdaBoost>(adaboost), X, y_true);
