// qda.cpp
struct qda::impl {
    np::mat internal_data;
    struct method : qda {
        np::mat decision_function(const np::mat &X);
    };
};
qda qda::fit(const np::mat &X, const np::ivec &y) {
    // some calculation
    m->internal_data = // something
    return this;
}
np::ivec qda::predict(const np::mat &X) const {
    auto a = m(this)->decision_function(X);
    // manupulate a
}
