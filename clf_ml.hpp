template<class T>
struct classifier_ml : classifier {
    T &impl;
    classifier_ml(T &impl) : impl(impl) {}
    np::ivec predict(const np::mat &X) const {
        return impl.predict(X);
    }
};
