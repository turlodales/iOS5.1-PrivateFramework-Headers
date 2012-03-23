/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface MPStyleManager : NSObject
{
    NSMutableDictionary *mStyles;
    NSArray *mPaths;
}

+ (id)sharedManager;
+ (void)releaseSharedManager;
- (void)dealloc;
- (id)allStyleIDs;
- (id)descriptionForStyleID:(id)arg1;
- (id)versionOfStyleID:(id)arg1;
- (id)localizedNameForStyleID:(id)arg1;
- (id)thumbnailForStyleID:(id)arg1;
- (id)framesForStyleID:(id)arg1;
- (id)effectPresetIDsForStyleID:(id)arg1;
- (id)effectPresetsForLayerIndex:(int)arg1 ofStyleID:(id)arg2;
- (id)backgroundColorForStyleID:(id)arg1;
- (id)effectIDsForStyleID:(id)arg1;
- (id)transitionsForStyleID:(id)arg1;
- (id)songPathsForStyleID:(id)arg1;
- (int)indexOfMainLayerForStyleID:(id)arg1;
- (int)indexOfTitleEffectLayerForStyleID:(id)arg1;
- (id)titleEffectLayoutsForStyleID:(id)arg1;
- (id)titleEffectLayoutForStyleID:(id)arg1;
- (double)shortestEffectDurationForStyleID:(id)arg1;
- (double)shortestDurationForEffectID:(id)arg1 forStyleID:(id)arg2;
- (double)minimumDurationForEffectID:(id)arg1 forStyleID:(id)arg2;
- (double)minimumEffectDurationForStyleID:(id)arg1;
- (BOOL)machineMeetsRequirementsForStyleID:(id)arg1;
- (BOOL)supportsRandomTransitionForStyleID:(id)arg1;

@end
