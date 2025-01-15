// objective: test the C++ attribute 'deprecated'
// 
// The examples here are taken from
// - https://en.cppreference.com/w/cpp/language/attributes/deprecated (since C++14)
// - https://en.cppreference.com/w/c/language/attributes/deprecated   (since C23)
//
// check: 909__cpp__deprecated__attribute_8cpp.xml
// check: class_deprecated01.xml
// check: class_template_class.xml
// check: class_template_class_3_01int_01_4.xml
// check: index.xml
// check: namespace_deprecated_namespace.xml

    
/// @todo A deprecated using definition named '`FLOAT_PTR`'
// 
using FLOAT_PTR [[deprecated("Do **NOT** use '`FLOAT_PTR`'")]] = float *;

[[deprecated]]
unsigned long deprecatedGlobalFunction00()
{
}

[[deprecated("Do **NOT** use '`deprecatedGlobalFunction01()`'")]]
unsigned long deprecatedGlobalFunction01()
{
}

/// In this example the Doxygen command and the C++ attribute are being mixed.
/// @deprecated Mixture of a Doxygen comment and a C++ '`deprecated`' attribute
[[deprecated("Do **NOT** use '`deprecatedGlobalFunction02()`'")]]
unsigned long deprecatedGlobalFunction02()
{
}

/*
/// This example is taken from 
/// https://en.cppreference.com/w/cpp/language/attributes/deprecated
enum [[deprecated("Do **NOT** use this enum any more) ]] DeprecatedEnum
{
  OLD,
  VERY_OLD  [[deprecated("'`VERY_OLD`' is deprecated"]] = 42,
  DONT_KNOW [[deprecated("'`VERY_OLD`' is deprecated"]]
};
*/

/** Test with **ONLY** C++ attribute '`[[deprecated]]`' but **WITH** formatted
    comment within the C++ 14 attribute
 */
class [[deprecated("The class '`Deprecated01`' is deprecated")]] Deprecated01
{
  private:
    /// A deprecated typedef named '`INT_PTR`'
    [[deprecated("Do **N O T** use the typedef '`INT_PTR`' any more")]] typedef int* INT_PTR;   

    /// deprecated attribute
    [[deprecated("'`deprecatedIntValue`' must **NOT** be used!")]] int deprecatedIntValue { 42 };
  public:
    /** Does deprecated things.
     */
    void [[deprecated("Do **NOT** use '`deprecated()`' any more")]] deprecated();
};

template<typename TN>
class TemplateClass
{
};

/// deprecated template specialization
template<> class [[deprecated("Do **NOT** use '`TemplateClass<int>`'")]] TemplateClass<int> 
{
};


/// This is a deprecated namespace
namespace [[deprecated("This namespace **MUST NOT** be used any more")]] DeprecatedNamespace
{
  int x;   ///< implcitly deprecated due to the deprecated namespace
}