___LoadHomeKit_block_invoke
void __cdecl __LoadHomeKit_block_invoke(id a1)
{
  LoadHomeKit_frameworkLibrary = (__int64)dlopen("/System/Library/Framework/HomeKit.framework/HomeKit", 2);
  if ( !LoadHomeKit_frameworkLibrary )
    NSLog(&CFSTR("### Failed to Soft Linked: /System/Library/Framework/HomeKit.framework/HomeKit").isa, a1, a1);
}