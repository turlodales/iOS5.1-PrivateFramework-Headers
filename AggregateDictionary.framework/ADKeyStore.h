/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

@interface ADKeyStore : NSObject
{
    NSMutableSet *_whitelistedScalarKeys;
    NSMutableSet *_whitelistedScalarPrefixes;
    NSMutableSet *_whitelistedDistributionKeys;
    NSMutableSet *_whitelistedDistributionPrefixes;
    NSMutableSet *_whitelistedMetadataKeys;
    BOOL _isInternalDevice;
}

+ (id)defaultWhitelist;
- (id)initWithPath:(id)arg1;
- (id)initWithDefaultPath;
- (void)dealloc;
- (BOOL)scalarKeyIsWhitelisted:(id)arg1;
- (BOOL)distributionKeyIsWhitelisted:(id)arg1;
- (BOOL)metadataKeyIsWhitelisted:(id)arg1;

@end
