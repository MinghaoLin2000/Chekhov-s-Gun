-[_TtC13DisplayMarkup25AnnotationsViewController maxPageRectWithPageIndex:forAnnotationController:]
CGRect __cdecl -[AnnotationsViewController maxPageRectWithPageIndex:forAnnotationController:](
        _TtC13DisplayMarkup25AnnotationsViewController *self,
        SEL a2,
        signed __int64 a3,
        id a4)
{
  id v5; // x21
  _TtC13DisplayMarkup25AnnotationsViewController *v6; // x20
  double v7; // d8
  double v8; // d1
  double v9; // d9
  double v10; // d2
  double v11; // d10
  double v12; // d3
  double v13; // d11
  double v14; // d0
  double v15; // d1
  double v16; // d2
  double v17; // d3
  CGRect result; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  v5 = objc_retain(a4);
  v6 = objc_retain(self);
  v7 = sub_10000BFA4();
  v9 = v8;
  v11 = v10;
  v13 = v12;
  objc_release(v5);
  objc_release(v6);
  v14 = v7;
  v15 = v9;
  v16 = v11;
  v17 = v13;
  result.size.height = v17;
  result.size.width = v16;
  result.origin.y = v15;
  result.origin.x = v14;
  return result;
}