-[PKNANEndpoint debugDescription]
id __cdecl -[PKNANEndpoint debugDescription](PKNANEndpoint *self, SEL a2)
{
  NSMutableArray *v3; // x19
  __int64 v4; // x1
  NSString *v5; // x21
  NSString *v6; // x21
  NSString *v7; // x22
  NSDictionary *v8; // x21
  void *v9; // x22
  NSString *v10; // x23
  WiFiAwareDiscoveryResult *v11; // x21
  NSString *v12; // x22
  WiFiAwareDiscoveryResult *v13; // x21
  NSString *v14; // x22
  WiFiAwareDiscoveryResult *v15; // x21
  void *v16; // x22
  NSString *v17; // x23
  WiFiAwareDiscoveryResult *v18; // x21
  const __CFString *v19; // x8
  NSString *v20; // x22
  WiFiAwareDiscoveryResult *v21; // x21
  const __CFString *v22; // x8
  NSString *v23; // x22
  WiFiAwareDiscoveryResult *v24; // x21
  const __CFString *v25; // x8
  NSString *v26; // x22
  void *v27; // x20
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("Endpoint: <%@:%p>"),
           objc_opt_class(self, v4),
           self));
  -[NSMutableArray addObject:](v3, "addObject:", v5);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint name](self, "name"));
  v7 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("Instance Name: %@"), v6));
  -[NSMutableArray addObject:](v3, "addObject:", v7);
  objc_release(v7);
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint textInfo](self, "textInfo"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSDictionary debugDescription](v8, "debugDescription"));
  v10 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("TXT Record: %@"), v9));
  -[NSMutableArray addObject:](v3, "addObject:", v10);
  objc_release(v10);
  objc_release(v9);
  objc_release(v8);
  v11 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
  v12 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("RSSI: %d"),
            -[WiFiAwareDiscoveryResult rssi](v11, "rssi")));
  -[NSMutableArray addObject:](v3, "addObject:", v12);
  objc_release(v12);
  objc_release(v11);
  v13 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
  v14 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Publisher ID: %d"),
            (unsigned int)-[WiFiAwareDiscoveryResult publishID](v13, "publishID")));
  -[NSMutableArray addObject:](v3, "addObject:", v14);
  objc_release(v14);
  objc_release(v13);
  v15 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
  v16 = objc_retainAutoreleasedReturnValue(-[WiFiAwareDiscoveryResult publisherAddress](v15, "publisherAddress"));
  v17 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Publisher address: %@"),
            v16));
  -[NSMutableArray addObject:](v3, "addObject:", v17);
  objc_release(v17);
  objc_release(v16);
  objc_release(v15);
  v18 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
  if ( (unsigned int)-[WiFiAwareDiscoveryResult datapathSupported](v18, "datapathSupported") )
    v19 = CFSTR("YES");
  else
    v19 = CFSTR("NO");
  v20 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Datapath Supported: %@"),
            v19));
  -[NSMutableArray addObject:](v3, "addObject:", v20);
  objc_release(v20);
  objc_release(v18);
  v21 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
  if ( (unsigned int)-[WiFiAwareDiscoveryResult datapathSecurityRequired](v21, "datapathSecurityRequired") )
    v22 = CFSTR("YES");
  else
    v22 = CFSTR("NO");
  v23 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Datapath Security Required: %@"),
            v22));
  -[NSMutableArray addObject:](v3, "addObject:", v23);
  objc_release(v23);
  objc_release(v21);
  v24 = objc_retainAutoreleasedReturnValue(-[PKNANEndpoint discoveryResult](self, "discoveryResult"));
  if ( (unsigned int)-[WiFiAwareDiscoveryResult furtherServiceDiscoveryRequired](v24, "furtherServiceDiscoveryRequired") )
    v25 = CFSTR("YES");
  else
    v25 = CFSTR("NO");
  v26 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("Further Discovery Required: %@"),
            v25));
  -[NSMutableArray addObject:](v3, "addObject:", v26);
  objc_release(v26);
  objc_release(v24);
  v27 = objc_retainAutoreleasedReturnValue(-[NSMutableArray componentsJoinedByString:](v3, "componentsJoinedByString:", CFSTR("\n")));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v27);
}