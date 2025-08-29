_deviceIsRunningInternalBuild
__int64 deviceIsRunningInternalBuild()
{
  return _os_variant_has_internal_content("com.apple.AppleMediaServicesUIDynamic");
}