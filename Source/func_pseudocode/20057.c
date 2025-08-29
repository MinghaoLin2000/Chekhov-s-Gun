-[PKNANDataSession peerAddress]
$73F895DBD1999BB8C4FC3321EA55D21E *__cdecl -[PKNANDataSession peerAddress](
        $73F895DBD1999BB8C4FC3321EA55D21E *__return_ptr retstr,
        PKNANDataSession *self,
        SEL a3)
{
  void *v5; // x21
  $73F895DBD1999BB8C4FC3321EA55D21E *result; // x0

  retstr->var0 = 0uLL;
  retstr->var2.sin6_scope_id = 0;
  *(_QWORD *)&retstr->var2.sin6_addr.__u6_addr32[2] = 0LL;
  *(_WORD *)&retstr->var0.sa_len = 7708;
  v5 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(-[WiFiMACAddress ipv6LinkLocalAddress](self->_peerDataAddress, "ipv6LinkLocalAddress")));
  retstr->var2.sin6_addr = *(in6_addr *)objc_msgSend(v5, "bytes");
  objc_release(v5);
  retstr->var2.sin6_scope_id = (unsigned int)-[WiFiAwareDataSession localInterfaceIndex](
                                               self->_dataSession,
                                               "localInterfaceIndex");
  result = ($73F895DBD1999BB8C4FC3321EA55D21E *)-[WiFiAwarePublishDatapathServiceSpecificInfo servicePort](
                                                  self->_serviceSpecificInfo,
                                                  "servicePort");
  retstr->var1.sin_port = __rev16((unsigned int)result);
  return result;
}