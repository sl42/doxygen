// objective: test the C++ attribute 'deprecated'
// check: 909__cpp__deprecated__attribute_8cpp.xml
// check: class_deprecated01.xml
// check: namespace_deprecated_namespace.xml

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
  VERY_OLD
};
*/

/** Test with **ONLY** C++ attribute '`[[deprecated]]`' but **WITH** formatted
    comment within the C++ 14 attribute
 */
class [[deprecated("The class '`Deprecated01`' is deprecated")]] Deprecated01
{
  private:
    [[deprecated("Do **NOT** use the typedef '`INT_PTR`' any more")]] typedef int* INT_PTR;

    /// deprecated attribute
    [[deprecated("'`deprecatedIntValue`' must **NOT** be used!")]] int deprecatedIntValue { 42 };
  public:
    /** Does deprecated things.
     */
    void [[deprecated("Do **NOT** use '`deprecated()`' any more")]] deprecated();
};


/// This is a deprecated namespace
namespace [[deprecated("This namespace **MUST NOT** be used any more")]] DeprecatedNamespace
{
  int x;   ///< implcitly deprecated due to the deprecated namespace
}