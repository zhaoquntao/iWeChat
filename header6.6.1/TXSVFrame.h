//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TXSVFrame : NSObject
{
    _Bool _mirror;
    _Bool _renderMirror;
    int _texture;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    long long _frameIndex;
    long long _angle;
    long long _gravityAngel;
    long long _renderRotation;
    unsigned long long _timeStamp;
    struct CGSize _encodeSize;
    struct CGRect _cropRect;
}

@property(nonatomic) int texture; // @synthesize texture=_texture;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) struct CGSize encodeSize; // @synthesize encodeSize=_encodeSize;
@property(nonatomic) long long renderRotation; // @synthesize renderRotation=_renderRotation;
@property(nonatomic) long long gravityAngel; // @synthesize gravityAngel=_gravityAngel;
@property(nonatomic) long long angle; // @synthesize angle=_angle;
@property(nonatomic) _Bool renderMirror; // @synthesize renderMirror=_renderMirror;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(nonatomic) long long frameIndex; // @synthesize frameIndex=_frameIndex;
@property(nonatomic) struct opaqueCMSampleBuffer *sampleBuffer; // @synthesize sampleBuffer=_sampleBuffer;

@end

