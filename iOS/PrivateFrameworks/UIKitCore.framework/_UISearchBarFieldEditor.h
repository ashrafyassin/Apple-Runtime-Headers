//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIFieldEditor.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarFieldEditor : UIFieldEditor
{
    struct {
        unsigned int inLayoutSubviews:1;
    } _flags;
}

- (id)selectionRectsForRange:(id)arg1;
- (void)_updateTokenViews;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;
- (_Bool)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout struct CGRect *)arg2 lineFragmentUsedRect:(inout struct CGRect *)arg3 baselineOffset:(inout double *)arg4 inTextContainer:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
- (struct CGRect)_usedRectWithLayoutManager:(id)arg1 textContainer:(id)arg2;
- (void)deactivateEditorDiscardingEdits:(_Bool)arg1;
- (void)activateEditor;
- (void)layoutSubviews;

@end

