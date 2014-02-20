struct classifier {
    virtual np::ivec predict(const np::mat &X) const = 0;
};

template<class T>
struct classifier_impl : classifier {
    T impl;
    np::ivec predict(const np::mat &X) const {
        return impl.predict(X);
    }
};
