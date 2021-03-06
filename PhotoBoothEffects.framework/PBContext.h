/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PBContext : NSObject
{
}

+ (id)openCLContext;
+ (id)openGLContext;
- (void)unlock;
- (void)lock;
- (void)applyFilter:(id)arg1 toSurface:(struct __IOSurface *)arg2 mirrored:(BOOL)arg3 resultHandler:(id)arg4;
- (void)applyFilter:(id)arg1 toSurface:(struct __IOSurface *)arg2 mirrored:(BOOL)arg3 surfaceResultHandler:(id)arg4;
@property(retain, nonatomic) struct __CVPixelBufferPool *smallPool; // @dynamic smallPool;
@property(retain, nonatomic) struct __CVPixelBufferPool *largePool; // @dynamic largePool;
@property(nonatomic) struct _CAImageQueue *outputImageQueue; // @dynamic outputImageQueue;
- (struct __CVBuffer *)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(BOOL)arg3;
- (struct __CVBuffer *)createCVPixelBufferForFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(BOOL)arg3;
- (void)renderNineUp:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2 mirrored:(BOOL)arg3;
- (void)renderFilter:(id)arg1 inputPixelBuffer:(struct __CVBuffer *)arg2;
- (void)preloadFilter:(id)arg1;
- (id)init;

@end

