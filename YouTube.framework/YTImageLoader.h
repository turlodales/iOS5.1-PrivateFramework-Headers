/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNotificationCenter, NSTimer;

@interface YTImageLoader : NSObject
{
    NSLock *_queueLock;
    NSMutableArray *_loadQueue;
    NSMutableSet *_loadsInProgress;
    NSLock *_cacheLock;
    NSMutableDictionary *_imageCache;
    NSMutableDictionary *_roundedThumbnailImageCache;
    NSMutableDictionary *_largeThumbnailImageCache;
    NSMutableDictionary *_pluginImageCache;
    NSMutableArray *_imageCacheLRU;
    struct __CFRunLoop *_loaderRunLoop;
    struct __CFRunLoopSource *_loaderSource;
    NSNotificationCenter *_notificationCenter;
    NSTimer *_loadStatusNotificationTimer;
    struct _opaque_pthread_mutex_t {
        long __sig;
        char __opaque[40];
    } _startupLock;
    struct _opaque_pthread_cond_t {
        long __sig;
        char __opaque[24];
    } _startupCondition;
}

+ (id)sharedImageLoader;
- (id)init;
- (BOOL)isLoadingImages;
- (struct CGImage *)createRoundedThumbnailWithImage:(struct CGImage *)arg1;
- (struct CGImage *)_largeThumbnailOverlay;
- (struct CGImage *)createSheenedThumbnailWithImage:(struct CGImage *)arg1 overlay:(struct CGImage *)arg2 width:(int)arg3 height:(int)arg4;
- (struct CGImage *)imageForURL:(id)arg1 rounded:(BOOL)arg2 videoID:(id)arg3 loadIfAbsent:(BOOL)arg4;
- (struct CGImage *)largeImageForURL:(id)arg1 videoID:(id)arg2 loadIfAbsent:(BOOL)arg3;
- (struct CGImage *)pluginImageForURL:(id)arg1 videoID:(id)arg2 loadIfAbsent:(BOOL)arg3;
- (id)notificationCenter;
- (void)saveCache:(id)arg1;
- (void)loadCache:(id)arg1;

@end

