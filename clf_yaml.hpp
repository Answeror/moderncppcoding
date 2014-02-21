template<class T>
struct classifier_yaml : classifier {
    T &impl;
    classifier_yaml(T &impl) : impl(impl) {}
    np::ivec predict(const np::mat &X) const {
        return impl.transform(X);
    }
};
