-[NSTabView tabViewItemWithIdentifier:]
id __cdecl -[NSTabView tabViewItemWithIdentifier:](NSTabView *self, SEL a2, id a3)
{
  NSInteger v4; // x0
  NSTabViewItem *v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = -[NSTabView indexOfTabViewItemWithIdentifier:](self, "indexOfTabViewItemWithIdentifier:", a3);
  if ( v4 == 0x7FFFFFFFFFFFFFFFLL )
    v5 = 0LL;
  else
    v5 = objc_retainAutoreleasedReturnValue(-[NSTabView tabViewItemAtIndex:](self, "tabViewItemAtIndex:", v4));
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}