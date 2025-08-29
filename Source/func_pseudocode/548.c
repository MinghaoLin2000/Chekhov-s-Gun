-[DeviceSettingsDetailsTabContentViewController clickCheckBox:]
void __cdecl -[DeviceSettingsDetailsTabContentViewController clickCheckBox:](
        DeviceSettingsDetailsTabContentViewController *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  void *v5; // x20
  __int64 v6; // x24
  DeviceSettingsTabContentOutlineView *v7; // x23
  void *v8; // x27
  unsigned __int64 v9; // x22
  DeviceSettingsTabContentOutlineView *v10; // x25
  DeviceSettingsTabContentOutlineView *v11; // x25
  DeviceSettingsTabContentOutlineView *v12; // x24
  DeviceSettingsNode *v13; // x24
  NSMutableArray *v14; // x25
  void *v15; // x26
  NSMutableDictionary *v16; // x24
  void *v17; // x25
  void *v18; // x0
  DeviceSettingsTabContentOutlineView *v19; // x25
  DeviceSettingsNode *v20; // x25
  NSMutableSet *v21; // x24
  DeviceSettingsNode *v22; // x25
  DeviceSettingsTabContentOutlineView *v23; // x24
  DeviceSettingsNode *v24; // x25
  NSMutableDictionary *v25; // x25
  void *v26; // x26
  void *v27; // x24
  DeviceSettingsNode *v28; // x25
  NSMutableSet *v29; // x25
  DeviceSettingsTabContentOutlineView *v30; // x25
  DeviceSettingsTabContentOutlineView *v31; // x25
  id v32; // x22
  NSMutableSet *v33; // x26
  void *v34; // x24
  void *v35; // x0
  void *v36; // x27
  __int64 v37; // x22
  void *i; // x23
  __int64 v39; // x28
  DeviceSettingsTabContentOutlineView *v40; // x25
  DeviceSettingsTabContentOutlineView *v41; // x24
  NSMutableSet *v42; // x24
  DeviceSettingsTabContentOutlineView *v43; // x24
  DeviceSettingsTabContentOutlineView *v44; // x24
  DeviceSettingsNode *v45; // x24
  void *v46; // x25
  DeviceSettingsNode *v47; // x24
  NSMutableSet *v48; // x24
  DeviceSettingsNode *v49; // x25
  DeviceSettingsTabContentOutlineView *v50; // x24
  DeviceSettingsNode *v51; // x25
  id v52; // [xsp+8h] [xbp-138h]
  void *v53; // [xsp+10h] [xbp-130h]
  DeviceSettingsTabContentOutlineView *v54; // [xsp+18h] [xbp-128h]
  __int128 v55; // [xsp+20h] [xbp-120h] BYREF
  __int128 v56; // [xsp+30h] [xbp-110h]
  __int128 v57; // [xsp+40h] [xbp-100h]
  __int128 v58; // [xsp+50h] [xbp-F0h]
  _BYTE v59[128]; // [xsp+60h] [xbp-E0h] BYREF

  v4 = objc_retain(a3);
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "node"));
  v6 = (__int64)objc_msgSend(v4, "state");
  if ( v6 == -1 )
  {
    v6 = 1LL;
    objc_msgSend(v4, "setState:", 1LL);
  }
  v7 = (DeviceSettingsTabContentOutlineView *)objc_retainAutoreleasedReturnValue(
                                                -[DeviceSettingsDetailsTabContentViewController outlineViewForCheckBox:](
                                                  self,
                                                  "outlineViewForCheckBox:",
                                                  v4));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(NSApp, "currentEvent"));
  v9 = (unsigned __int64)objc_msgSend(v8, "modifierFlags") & 0xFFFF0000;
  v10 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  objc_release(v10);
  if ( v7 == v10 )
  {
    if ( v9 == 0x100000 )
    {
      -[DeviceSettingsDetailsTabContentViewController setDetailsNodesState:](self, "setDetailsNodesState:", v6);
      v19 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
      -[DeviceSettingsTabContentOutlineView reloadData](v19, "reloadData");
      objc_release(v19);
      if ( !-[DeviceSettingsDetailsTabContentViewController independentLeadingAndTrailingCheckBoxes](
              self,
              "independentLeadingAndTrailingCheckBoxes") )
      {
        v20 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController sourceNode](self, "sourceNode"));
        -[DeviceSettingsNode setState:setChildren:setAncestors:](
          v20,
          "setState:setChildren:setAncestors:",
          v6,
          0LL,
          0LL);
        objc_release(v20);
        v21 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController checkedItems](self, "checkedItems"));
        v22 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController sourceNode](self, "sourceNode"));
        -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
          self,
          "updateCheckedItems:withNode:updateChildren:updateAncestors:",
          v21,
          v22,
          0LL,
          0LL);
        objc_release(v22);
        objc_release(v21);
        v23 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
        v24 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController sourceNode](self, "sourceNode"));
        -[DeviceSettingsTabContentOutlineView reloadItem:reloadChildren:](v23, "reloadItem:reloadChildren:", v24, 0LL);
        objc_release(v24);
        objc_release(v23);
      }
      v25 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController detailsModelDict](self, "detailsModelDict"));
      v26 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allValues](v25, "allValues"));
      v27 = objc_msgSend(v26, "mutableCopy");
      objc_release(v26);
      objc_release(v25);
      if ( !-[DeviceSettingsDetailsTabContentViewController independentLeadingAndTrailingCheckBoxes](
              self,
              "independentLeadingAndTrailingCheckBoxes") )
      {
        v28 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController sourceNode](self, "sourceNode"));
        objc_msgSend(v27, "addObject:", v28);
        objc_release(v28);
      }
      -[DeviceSettingsTabContentViewController postDidChangeNodes:](self, "postDidChangeNodes:", v27);
      v18 = v27;
      goto LABEL_12;
    }
    objc_msgSend(v5, "setState:setChildren:setAncestors:", v6, 1LL, 1LL);
    v42 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController detailsCheckedItems](self, "detailsCheckedItems"));
    -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
      self,
      "updateCheckedItems:withNode:updateChildren:updateAncestors:",
      v42,
      v5,
      1LL,
      1LL);
    objc_release(v42);
    v43 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
    -[DeviceSettingsTabContentOutlineView reloadItem:reloadChildren:](v43, "reloadItem:reloadChildren:", v5, 1LL);
    objc_release(v43);
    v44 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
    -[DeviceSettingsTabContentOutlineView reloadAncestorsOfItem:](v44, "reloadAncestorsOfItem:", v5);
    objc_release(v44);
    if ( !-[DeviceSettingsDetailsTabContentViewController independentLeadingAndTrailingCheckBoxes](
            self,
            "independentLeadingAndTrailingCheckBoxes") )
    {
      v45 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController detailsModel](self, "detailsModel"));
      v46 = -[DeviceSettingsNode effectiveStateOfChildren](v45, "effectiveStateOfChildren");
      objc_release(v45);
      v47 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController sourceNode](self, "sourceNode"));
      -[DeviceSettingsNode setState:setChildren:setAncestors:](v47, "setState:setChildren:setAncestors:", v46, 0LL, 0LL);
      objc_release(v47);
      v48 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController checkedItems](self, "checkedItems"));
      v49 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController sourceNode](self, "sourceNode"));
      -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
        self,
        "updateCheckedItems:withNode:updateChildren:updateAncestors:",
        v48,
        v49,
        0LL,
        0LL);
      objc_release(v49);
      objc_release(v48);
      v50 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
      v51 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController sourceNode](self, "sourceNode"));
      -[DeviceSettingsTabContentOutlineView reloadItem:reloadChildren:](v50, "reloadItem:reloadChildren:", v51, 0LL);
      objc_release(v51);
      objc_release(v50);
    }
LABEL_24:
    -[DeviceSettingsTabContentViewController postDidChangeNode:](self, "postDidChangeNode:", v5);
    goto LABEL_25;
  }
  if ( v9 != 0x100000 )
  {
    objc_msgSend(v5, "setState:setChildren:setAncestors:", v6, 1LL, 1LL);
    v29 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController checkedItems](self, "checkedItems"));
    -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
      self,
      "updateCheckedItems:withNode:updateChildren:updateAncestors:",
      v29,
      v5,
      1LL,
      1LL);
    objc_release(v29);
    v30 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
    -[DeviceSettingsTabContentOutlineView reloadItem:reloadChildren:](v30, "reloadItem:reloadChildren:", v5, 1LL);
    objc_release(v30);
    v31 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
    -[DeviceSettingsTabContentOutlineView reloadAncestorsOfItem:](v31, "reloadAncestorsOfItem:", v5);
    objc_release(v31);
    if ( !-[DeviceSettingsDetailsTabContentViewController independentLeadingAndTrailingCheckBoxes](
            self,
            "independentLeadingAndTrailingCheckBoxes") )
    {
      v53 = v8;
      v54 = v7;
      v32 = objc_retainAutoreleasedReturnValue(
              -[DeviceSettingsDetailsTabContentViewController detailsNodeForSourceNode:](
                self,
                "detailsNodeForSourceNode:",
                v5));
      v33 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController detailsCheckedItems](self, "detailsCheckedItems"));
      objc_msgSend(v32, "setState:setChildren:setAncestors:", v6, 1LL, 0LL);
      v57 = 0u;
      v58 = 0u;
      v55 = 0u;
      v56 = 0u;
      v52 = v32;
      v34 = objc_retainAutoreleasedReturnValue(objc_msgSend(v32, "children"));
      v35 = objc_msgSend(v34, "countByEnumeratingWithState:objects:count:", &v55, v59, 16LL);
      if ( v35 )
      {
        v36 = v35;
        v37 = *(_QWORD *)v56;
        do
        {
          for ( i = 0LL; i != v36; i = (char *)i + 1 )
          {
            if ( *(_QWORD *)v56 != v37 )
              objc_enumerationMutation(v34);
            v39 = *(_QWORD *)(*((_QWORD *)&v55 + 1) + 8LL * (_QWORD)i);
            -[DeviceSettingsTabContentViewController updateCheckedItems:withNode:updateChildren:updateAncestors:](
              self,
              "updateCheckedItems:withNode:updateChildren:updateAncestors:",
              v33,
              v39,
              1LL,
              0LL);
            v40 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
            -[DeviceSettingsTabContentOutlineView reloadItem:reloadChildren:](
              v40,
              "reloadItem:reloadChildren:",
              v39,
              1LL);
            objc_release(v40);
          }
          v36 = objc_msgSend(v34, "countByEnumeratingWithState:objects:count:", &v55, v59, 16LL);
        }
        while ( v36 );
      }
      objc_release(v34);
      v41 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
      -[DeviceSettingsTabContentOutlineView setNeedsDisplay:](v41, "setNeedsDisplay:", 1LL);
      objc_release(v41);
      objc_release(v33);
      objc_release(v52);
      v8 = v53;
      v7 = v54;
    }
    goto LABEL_24;
  }
  -[DeviceSettingsDetailsTabContentViewController setSourceNodesState:](self, "setSourceNodesState:", v6);
  v11 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController outlineView](self, "outlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v11, "reloadData");
  objc_release(v11);
  -[DeviceSettingsDetailsTabContentViewController setDetailsNodesState:](self, "setDetailsNodesState:", v6);
  v12 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController trailingOutlineView](self, "trailingOutlineView"));
  -[DeviceSettingsTabContentOutlineView reloadData](v12, "reloadData");
  objc_release(v12);
  v13 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsTabContentViewController model](self, "model"));
  v14 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsNode children](v13, "children"));
  v15 = -[NSMutableArray mutableCopy](v14, "mutableCopy");
  objc_release(v14);
  objc_release(v13);
  v16 = objc_retainAutoreleasedReturnValue(-[DeviceSettingsDetailsTabContentViewController detailsModelDict](self, "detailsModelDict"));
  v17 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary allValues](v16, "allValues"));
  objc_msgSend(v15, "addObjectsFromArray:", v17);
  objc_release(v17);
  objc_release(v16);
  -[DeviceSettingsTabContentViewController postDidChangeNodes:](self, "postDidChangeNodes:", v15);
  v18 = v15;
LABEL_12:
  objc_release(v18);
LABEL_25:
  objc_release(v8);
  objc_release(v7);
  objc_release(v5);
  objc_release(v4);
}