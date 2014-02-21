struct classifier {
    virtual np::ivec predict(const np::mat &X) const = 0;
};
