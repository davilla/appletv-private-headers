/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSURL, NSString, NSDictionary, NSNumber;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSURL *URL;	// G=0x310442a5; S=0x310442c1; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x310443f9; 
@property(copy, nonatomic) NSDictionary *XProperties;	// G=0x31044415; S=0x31044465; 
@property(copy, nonatomic) NSString *fileFormat;	// G=0x31044315; S=0x31044331; 
@property(copy, nonatomic) NSString *fileName;	// G=0x310442dd; S=0x310442f9; 
@property(copy, nonatomic) NSNumber *fileSize;	// G=0x310443c1; S=0x310443dd; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x3104434d; 
@property(copy, nonatomic) NSURL *localURL;	// G=0x31044389; S=0x310443a5; 
+ (id)relations;	// 0x310440ed
// declared property getter: - (id)URL;	// 0x310442a5
// declared property getter: - (id)UUID;	// 0x310443f9
// declared property getter: - (id)XProperties;	// 0x31044415
- (id)copyWithZone:(NSZone *)zone;	// 0x3104417d
- (id)description;	// 0x310444bd
// declared property getter: - (id)fileFormat;	// 0x31044315
// declared property getter: - (id)fileName;	// 0x310442dd
// declared property getter: - (id)fileSize;	// 0x310443c1
// declared property getter: - (BOOL)isBinary;	// 0x3104434d
// declared property getter: - (id)localURL;	// 0x31044389
// declared property setter: - (void)setFileFormat:(id)format;	// 0x31044331
// declared property setter: - (void)setFileName:(id)name;	// 0x310442f9
// declared property setter: - (void)setFileSize:(id)size;	// 0x310443dd
- (void)setIsBinary:(BOOL)binary;	// 0x3104436d
// declared property setter: - (void)setLocalURL:(id)url;	// 0x310443a5
// declared property setter: - (void)setURL:(id)url;	// 0x310442c1
// declared property setter: - (void)setXProperties:(id)properties;	// 0x31044465
@end

