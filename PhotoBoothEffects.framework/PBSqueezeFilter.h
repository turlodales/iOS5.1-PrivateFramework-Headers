/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoBoothEffects/PBFilter.h>

@interface PBSqueezeFilter : PBFilter
{
    float _inputAmount;
    struct CGPoint inputPoint;
}

@property struct CGPoint inputPoint; // @synthesize inputPoint;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize)arg2 outputRect:(struct CGRect)arg3 mirrored:(BOOL)arg4;
- (id)_glesUniforms;
- (const char *)_fragmentShaderSource;
@property float inputAmount; // @dynamic inputAmount;
- (void)setDefaults;

@end

