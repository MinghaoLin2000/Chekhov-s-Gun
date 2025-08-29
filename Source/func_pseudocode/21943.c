-[PAXPCDispatch _replyToSetUbiquityRequest:withError:]
void __cdecl -[PAXPCDispatch _replyToSetUbiquityRequest:withError:](PAXPCDispatch *self, SEL a2, id a3, id a4)
{
  id v5; // x19
  id v6; // x20
  xpc_object_t reply; // x21
  NSData *v8; // x22
  _xpc_connection_s *v9; // x22
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  v6 = objc_retain(a4);
  reply = xpc_dictionary_create_reply(v5);
  if ( v6 )
  {
    v8 = objc_retainAutorelease(
           objc_retainAutoreleasedReturnValue(
             +[NSKeyedArchiver archivedDataWithRootObject:requiringSecureCoding:error:](
               &OBJC_CLASS___NSKeyedArchiver,
               "archivedDataWithRootObject:requiringSecureCoding:error:",
               v6,
               1LL,
               0LL)));
    xpc_dictionary_set_data(reply, "error", -[NSData bytes](v8, "bytes"), -[NSData length](v8, "length"));
    objc_release(v8);
  }
  v9 = objc_retainAutoreleasedReturnValue(xpc_dictionary_get_remote_connection(v5));
  xpc_connection_send_message(v9, reply);
  objc_release(v9);
  objc_release(reply);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}