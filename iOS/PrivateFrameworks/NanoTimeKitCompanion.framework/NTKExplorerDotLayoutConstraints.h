//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSCopying-Protocol.h>
#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@interface NTKExplorerDotLayoutConstraints : NSObject <NSCopying, NSSecureCoding>
{
    double _dotDiameter;
    double _dotBorderWidth;
    double _dotSpacing;
    double _noServiceDotHeight;
}

+ (_Bool)supportsSecureCoding;
@property double noServiceDotHeight; // @synthesize noServiceDotHeight=_noServiceDotHeight;
@property double dotSpacing; // @synthesize dotSpacing=_dotSpacing;
@property double dotBorderWidth; // @synthesize dotBorderWidth=_dotBorderWidth;
@property double dotDiameter; // @synthesize dotDiameter=_dotDiameter;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToLayoutConstraints:(id)arg1;

@end

