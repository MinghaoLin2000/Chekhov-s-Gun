-[Browse_Bonjour _browserForServiceType:changedFrom:to:done:]
void __cdecl -[Browse_Bonjour _browserForServiceType:changedFrom:to:done:](
        Browse_Bonjour *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        bool a6)
{
  nw_browse_result *v8; // x19
  nw_browse_result *v9; // x20
  char changes; // w0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v8 = (nw_browse_result *)objc_retain(a4);
  v9 = (nw_browse_result *)objc_retain(a5);
  dispatch_assert_queue_V2((dispatch_queue_t)self->_queue);
  changes = nw_browse_result_get_changes(v8, v9);
  if ( (changes & 1) == 0 )
  {
    if ( (changes & 2) != 0 )
    {
LABEL_5:
      -[Browse_Bonjour addResult:](self, "addResult:", v9);
      goto LABEL_7;
    }
    if ( (changes & 4) == 0 )
    {
      -[Browse_Bonjour removeResult:](self, "removeResult:", v8);
      goto LABEL_5;
    }
    -[Browse_Bonjour removeResult:](self, "removeResult:", v8);
  }
LABEL_7:
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}