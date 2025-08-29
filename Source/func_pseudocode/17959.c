___21-[WACEAService setup]_block_invoke
void __fastcall __21__WACEAService_setup__block_invoke(__int64 a1)
{
  id v1; // [xsp+0h] [xbp-60h]
  void *v2; // [xsp+8h] [xbp-58h]
  id v3; // [xsp+10h] [xbp-50h]
  void *v4; // [xsp+18h] [xbp-48h]
  id v5; // [xsp+20h] [xbp-40h]
  id v6; // [xsp+28h] [xbp-38h]
  void *v8; // [xsp+40h] [xbp-20h]
  void *v9; // [xsp+48h] [xbp-18h]

  v1 = objc_alloc_init((Class)getHMHomeManagerClass());
  objc_msgSend(*(id *)(a1 + 32), "setHomeManager:");
  objc_release(v1);
  v2 = *(void **)(a1 + 32);
  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(v2, "homeManager"));
  objc_msgSend(v3, "setDelegate:", v2);
  objc_release(v3);
  v4 = *(void **)(a1 + 32);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "homeManager"));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "currentHome"));
  objc_msgSend(v5, "setDelegate:", v4);
  objc_release(v5);
  objc_release(v6);
  v8 = *(void **)(a1 + 32);
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "currentHome"));
  objc_msgSend(v9, "setDelegate:", v8);
  objc_release(v9);
}