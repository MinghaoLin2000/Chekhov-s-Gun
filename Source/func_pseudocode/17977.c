_LoadHomeKit
__int64 LoadHomeKit()
{
  dispatch_block_t block; // [xsp+0h] [xbp-10h] BYREF
  dispatch_once_t *predicate; // [xsp+8h] [xbp-8h]

  predicate = (dispatch_once_t *)&LoadHomeKit_loadPredicate;
  block = 0LL;
  objc_storeStrong(&block, &__block_literal_global);
  if ( *predicate != -1 )
    dispatch_once(predicate, block);
  objc_storeStrong(&block, 0LL);
  return LoadHomeKit_frameworkLibrary;
}