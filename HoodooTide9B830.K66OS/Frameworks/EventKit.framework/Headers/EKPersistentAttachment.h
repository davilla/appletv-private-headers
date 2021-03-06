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
@property(copy, nonatomic) NSURL *URL;	// G=0x324c708d; S=0x324c70a9; 
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x324c71e1; 
@property(copy, nonatomic) NSDictionary *XProperties;	// G=0x324c71fd; S=0x324c724d; 
@property(copy, nonatomic) NSString *fileFormat;	// G=0x324c70fd; S=0x324c7119; 
@property(copy, nonatomic) NSString *fileName;	// G=0x324c70c5; S=0x324c70e1; 
@property(copy, nonatomic) NSNumber *fileSize;	// G=0x324c71a9; S=0x324c71c5; 
@property(readonly, assign, nonatomic) BOOL isBinary;	// G=0x324c7135; 
@property(copy, nonatomic) NSURL *localURL;	// G=0x324c7171; S=0x324c718d; 
+ (id)relations;	// 0x324c6ed5
// declared property getter: - (id)URL;	// 0x324c708d
// declared property getter: - (id)UUID;	// 0x324c71e1
// declared property getter: - (id)XProperties;	// 0x324c71fd
- (id)copyWithZone:(NSZone *)zone;	// 0x324c6f65
- (id)description;	// 0x324c72a5
// declared property getter: - (id)fileFormat;	// 0x324c70fd
// declared property getter: - (id)fileName;	// 0x324c70c5
// declared property getter: - (id)fileSize;	// 0x324c71a9
// declared property getter: - (BOOL)isBinary;	// 0x324c7135
// declared property getter: - (id)localURL;	// 0x324c7171
// declared property setter: - (void)setFileFormat:(id)format;	// 0x324c7119
// declared property setter: - (void)setFileName:(id)name;	// 0x324c70e1
// declared property setter: - (void)setFileSize:(id)size;	// 0x324c71c5
- (void)setIsBinary:(BOOL)binary;	// 0x324c7155
// declared property setter: - (void)setLocalURL:(id)url;	// 0x324c718d
// declared property setter: - (void)setURL:(id)url;	// 0x324c70a9
// declared property setter: - (void)setXProperties:(id)properties;	// 0x324c724d
@end

