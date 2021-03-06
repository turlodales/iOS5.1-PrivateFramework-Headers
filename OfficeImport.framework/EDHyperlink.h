/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EDReference, EDString;

@interface EDHyperlink : NSObject
{
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}

+ (id)hyperlink;
- (void)dealloc;
- (id)path;
- (void)setPath:(id)arg1;
- (id)dosPath;
- (void)setDosPath:(id)arg1;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (id)textMark;
- (void)setTextMark:(id)arg1;
- (id)toolTip;
- (void)setToolTip:(id)arg1;
- (id)reference;
- (void)setReference:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;

@end

