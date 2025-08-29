-[IFDBundle deallocateLun:name:]
void __cdecl -[IFDBundle deallocateLun:name:](IFDBundle *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20
  NSMutableArray *v8; // x21
  os_log_s *v9; // x22

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  v8 = objc_retain(self->_usedLuns);
  objc_sync_enter(v8);
  if ( (unsigned int)-[NSMutableArray containsObject:](self->_usedLuns, "containsObject:", v6) )
  {
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)sub_100003F08(
                                                              -[NSMutableArray removeObject:](
                                                                self->_usedLuns,
                                                                "removeObject:",
                                                                v6)));
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_DEBUG) )
      sub_100005954(v7, v6, v9);
  }
  else
  {
    v9 = (os_log_s *)objc_retainAutoreleasedReturnValue((id)((__int64 (*)(void))sub_100003F08)());
    if ( os_log_type_enabled(v9, OS_LOG_TYPE_ERROR) )
      sub_1000059CC(v7, v6, v9);
  }
  objc_release(v9);
  objc_sync_exit(v8);
  objc_release(v8);
  objc_release(v7);
  objc_release(v6);
}