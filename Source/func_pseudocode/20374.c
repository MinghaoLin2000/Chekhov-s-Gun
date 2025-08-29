__Z20_lite_page_transformmm6CGRectiii
CGFloat __usercall _lite_page_transform@<D0>(
        CGAffineTransform *__return_ptr a1@<X8>,
        CGRect a2@<0:D0, 8:D1, 16:D2, 24:D3>,
        unsigned __int64 a3@<X0>,
        unsigned __int64 a4@<X1>,
        int a5@<W2>,
        int a6@<W3>,
        int a7@<W4>)
{
  CGFloat height; // d8
  CGFloat width; // d9
  CGFloat y; // d10
  CGFloat x; // d11
  unsigned __int64 v16; // x8
  double v17; // d0
  unsigned __int64 v18; // x8
  double a; // d15
  double d; // d12
  double b; // d13
  double c; // d14
  CGFloat v23; // d15
  double MinX; // d12
  double MinY; // d13
  double v26; // d14
  double v27; // d8
  double v28; // d0
  __int128 v29; // q1
  __int128 v30; // q1
  __int128 v31; // q1
  __int128 v32; // q1
  CGFloat result; // d0
  CGFloat v34; // [xsp+8h] [xbp-2D8h]
  CGFloat v35; // [xsp+10h] [xbp-2D0h]
  CGFloat v36; // [xsp+18h] [xbp-2C8h]
  CGAffineTransform v37; // [xsp+20h] [xbp-2C0h] BYREF
  CGAffineTransform v38; // [xsp+50h] [xbp-290h] BYREF
  CGAffineTransform v39; // [xsp+80h] [xbp-260h] BYREF
  CGAffineTransform v40; // [xsp+B0h] [xbp-230h] BYREF
  CGAffineTransform v41; // [xsp+E0h] [xbp-200h] BYREF
  CGAffineTransform v42; // [xsp+110h] [xbp-1D0h] BYREF
  CGAffineTransform v43; // [xsp+140h] [xbp-1A0h] BYREF
  CGAffineTransform t2; // [xsp+170h] [xbp-170h] BYREF
  CGAffineTransform t1; // [xsp+1A0h] [xbp-140h] BYREF
  CGAffineTransform v46; // [xsp+1D0h] [xbp-110h] BYREF
  CGAffineTransform v47; // [xsp+200h] [xbp-E0h] BYREF
  CGAffineTransform v48; // [xsp+230h] [xbp-B0h] BYREF
  __int128 v49; // [xsp+260h] [xbp-80h]
  CGRect v50; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v51; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v52; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8
  CGRect v53; // 0:d0.8,8:d1.8,16:d2.8,24:d3.8

  height = a2.size.height;
  width = a2.size.width;
  y = a2.origin.y;
  x = a2.origin.x;
  if ( a7 )
    v16 = a4;
  else
    v16 = a3;
  v17 = (double)v16 * -0.5;
  if ( a7 )
    v18 = a3;
  else
    v18 = a4;
  CGAffineTransformMakeTranslation(&v47, v17, (double)v18 * -0.5);
  switch ( a5 )
  {
    case 2:
      v48.a = 0.0;
      v48.b = 0.0;
      a = -1.0;
      d = 1.0;
      goto LABEL_12;
    case 3:
      v48.a = 0.0;
      v48.b = 0.0;
      d = -1.0;
      b = 0.0;
      c = 0.0;
      a = -1.0;
      break;
    case 4:
      v48.a = 0.0;
      v48.b = 0.0;
      a = 1.0;
      d = -1.0;
LABEL_12:
      b = 0.0;
      c = 0.0;
      break;
    case 5:
      v48.a = 0.0;
      v48.b = 0.0;
      d = 0.0;
      b = -1.0;
      c = -1.0;
      goto LABEL_17;
    case 6:
      v48.a = 0.0;
      v48.b = 0.0;
      d = 0.0;
      c = 1.0;
      b = -1.0;
      goto LABEL_17;
    case 7:
      v48.a = 0.0;
      v48.b = 0.0;
      d = 0.0;
      b = 1.0;
      c = 1.0;
      goto LABEL_17;
    case 8:
      v48.a = 0.0;
      v48.b = 0.0;
      d = 0.0;
      c = -1.0;
      b = 1.0;
LABEL_17:
      a = 0.0;
      break;
    default:
      a = CGAffineTransformIdentity.a;
      b = CGAffineTransformIdentity.b;
      c = CGAffineTransformIdentity.c;
      d = CGAffineTransformIdentity.d;
      *(_OWORD *)&v48.a = *(_OWORD *)&CGAffineTransformIdentity.tx;
      break;
  }
  v49 = *(_OWORD *)&v48.a;
  if ( a6 == 1 || a6 == -1 )
  {
    memset(&v48, 0, sizeof(v48));
    CGAffineTransformMakeRotation(&v48, (double)a6 * 3.14159265 * 0.5);
    t1.a = a;
    t1.b = b;
    t1.c = c;
    t1.d = d;
    *(_OWORD *)&t1.tx = v49;
    t2 = v48;
    CGAffineTransformConcat(&v46, &t1, &t2);
    v23 = v46.c;
    v34 = v46.a;
    v35 = v46.b;
    v36 = v46.d;
    v49 = *(_OWORD *)&v46.tx;
  }
  else
  {
    v35 = b;
    v36 = d;
    v34 = a;
    v23 = c;
  }
  v50.origin.x = x;
  v50.origin.y = y;
  v50.size.width = width;
  v50.size.height = height;
  MinX = CGRectGetMinX(v50);
  v51.origin.x = x;
  v51.origin.y = y;
  v51.size.width = width;
  v51.size.height = height;
  MinY = CGRectGetMinY(v51);
  v52.origin.x = x;
  v52.origin.y = y;
  v52.size.width = width;
  v52.size.height = height;
  v26 = CGRectGetWidth(v52);
  v53.origin.x = x;
  v53.origin.y = y;
  v53.size.width = width;
  v53.size.height = height;
  v27 = CGRectGetHeight(v53);
  v28 = v26 / (double)a3;
  if ( v28 >= v27 / (double)a4 )
    v28 = v27 / (double)a4;
  CGAffineTransformMakeScale(&v48, v28, v28);
  CGAffineTransformMakeTranslation(&v46, MinX + v26 * 0.5, MinY + v27 * 0.5);
  v43 = v47;
  v42.a = v34;
  v42.b = v35;
  v42.c = v23;
  v42.d = v36;
  *(_OWORD *)&v42.tx = v49;
  CGAffineTransformConcat(a1, &v43, &v42);
  v29 = *(_OWORD *)&a1->c;
  *(_OWORD *)&v40.a = *(_OWORD *)&a1->a;
  *(_OWORD *)&v40.c = v29;
  *(_OWORD *)&v40.tx = *(_OWORD *)&a1->tx;
  v39 = v48;
  CGAffineTransformConcat(&v41, &v40, &v39);
  v30 = *(_OWORD *)&v41.c;
  *(_OWORD *)&a1->a = *(_OWORD *)&v41.a;
  *(_OWORD *)&a1->c = v30;
  *(_OWORD *)&a1->tx = *(_OWORD *)&v41.tx;
  v31 = *(_OWORD *)&a1->c;
  *(_OWORD *)&v38.a = *(_OWORD *)&a1->a;
  *(_OWORD *)&v38.c = v31;
  *(_OWORD *)&v38.tx = *(_OWORD *)&a1->tx;
  v37 = v46;
  CGAffineTransformConcat(&v41, &v38, &v37);
  v32 = *(_OWORD *)&v41.c;
  *(_OWORD *)&a1->a = *(_OWORD *)&v41.a;
  *(_OWORD *)&a1->c = v32;
  result = v41.tx;
  *(_OWORD *)&a1->tx = *(_OWORD *)&v41.tx;
  return result;
}