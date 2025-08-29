__ZN10applesauce2CF9ObjectRefIP12CGColorSpaceED1Ev
const void **__fastcall applesauce::CF::ObjectRef<CGColorSpace *>::~ObjectRef(const void **a1)
{
  const void *v2; // x0

  v2 = *a1;
  if ( v2 )
    CFRelease(v2);
  return a1;
}