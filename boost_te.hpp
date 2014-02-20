BOOST_TYPE_ERASURE_MEMBER((has_predict), predict, 1)
namespace concept {
    typedef mpl::vector<
        copy_constructible<>,
        relaxed,
        has_predict<np::ivec(const np::mat&), const _self>
    > classifier;
}
typedef any<concept::classifier> classifier;
