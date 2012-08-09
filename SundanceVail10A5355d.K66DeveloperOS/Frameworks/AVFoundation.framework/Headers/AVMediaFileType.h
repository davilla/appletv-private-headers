/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSSet, NSString;

@interface AVMediaFileType : NSObject <NSCopying> {
	NSString *_uti;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *UTI;	// G=0x326dc105; 
@property(readonly, assign, nonatomic) unsigned long audioFileTypeID;	// G=0x326dc14d; 
@property(readonly, assign, nonatomic) NSString *defaultFileExtension;	// G=0x326dbf2d; 
@property(readonly, assign, nonatomic) NSString *figFormatReaderFileFormat;	// G=0x326dc115; 
@property(readonly, assign, nonatomic) NSSet *supportedMediaTypes;	// G=0x326dbf75; 
+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)fileTypeIdentifier exceptionReason:(id *)reason;	// 0x326dbc85
+ (id)allFileTypeIdentifiers;	// 0x326dbc2d
+ (void)initialize;	// 0x326dba89
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)fileTypeIdentifier;	// 0x326dbc71
- (id)initWithFileTypeIdentifier:(id)fileTypeIdentifier exceptionReason:(id *)reason;	// 0x326dbcd5
// declared property getter: - (id)UTI;	// 0x326dc105
// declared property getter: - (unsigned long)audioFileTypeID;	// 0x326dc14d
- (id)copyWithZone:(NSZone *)zone;	// 0x326dbeb5
- (void)dealloc;	// 0x326dbe69
// declared property getter: - (id)defaultFileExtension;	// 0x326dbf2d
- (id)description;	// 0x326dbec5
// declared property getter: - (id)figFormatReaderFileFormat;	// 0x326dc115
// declared property getter: - (id)supportedMediaTypes;	// 0x326dbf75
- (BOOL)supportsOutputSettings:(id)settings reason:(id *)reason;	// 0x326dc1bd
@end
