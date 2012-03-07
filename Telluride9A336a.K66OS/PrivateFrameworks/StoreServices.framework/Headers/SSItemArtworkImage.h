/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSURL, NSMutableDictionary;

@interface SSItemArtworkImage : NSObject <SSCoding, NSCopying> {
@private
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSString *_imageKind;	// 8 = 0x8
}
@property(retain, nonatomic) NSURL *URL;	// G=0x34204bad; S=0x34204f81; 
@property(readonly, assign, nonatomic) int height;	// G=0x342048c1; 
@property(copy, nonatomic) NSString *imageKind;	// G=0x342051ed; S=0x342051fd; @synthesize=_imageKind
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x3420496d; 
@property(readonly, assign, nonatomic) float imageScale;	// G=0x34204a2d; 
@property(readonly, assign, nonatomic) CGSize imageSize;	// G=0x34204e6d; 
@property(readonly, assign, nonatomic, getter=isPrerendered) BOOL prerendered;	// G=0x34204a99; 
@property(readonly, assign, nonatomic) int width;	// G=0x34204b01; 
- (id)initWithArtworkDictionary:(id)artworkDictionary;	// 0x34204e19
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x34205059
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x342050f9
// declared property getter: - (id)URL;	// 0x34204bad
- (void)_setValue:(id)value forKey:(id)key;	// 0x34204fcd
- (id)copyPropertyListEncoding;	// 0x34205135
- (id)copyWithZone:(NSZone *)zone;	// 0x34204835
- (void *)copyXPCEncoding;	// 0x342051b9
- (void)dealloc;	// 0x342047d5
- (id)description;	// 0x34204c81
- (unsigned)hash;	// 0x34204d71
// declared property getter: - (int)height;	// 0x342048c1
// declared property getter: - (id)imageKind;	// 0x342051ed
// declared property getter: - (int)imageOrientation;	// 0x3420496d
// declared property getter: - (float)imageScale;	// 0x34204a2d
// declared property getter: - (CGSize)imageSize;	// 0x34204e6d
- (BOOL)isEqual:(id)equal;	// 0x34204d99
// declared property getter: - (BOOL)isPrerendered;	// 0x34204a99
// declared property setter: - (void)setImageKind:(id)kind;	// 0x342051fd
- (void)setImageKindWithTypeName:(id)typeName variantName:(id)name;	// 0x34204eb9
// declared property setter: - (void)setURL:(id)url;	// 0x34204f81
- (void)setValue:(id)value forProperty:(id)property;	// 0x34204fbd
- (id)valueForProperty:(id)property;	// 0x34204c39
// declared property getter: - (int)width;	// 0x34204b01
@end
