/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import "LSResourceProxy.h"

@class NSString;

@interface LSDocumentProxy : LSResourceProxy {
	NSString *_name;	// 40 = 0x28
	NSString *_typeIdentifier;	// 44 = 0x2c
	NSString *_MIMEType;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x32a95c1d; @synthesize=_MIMEType
@property(readonly, assign, nonatomic) NSString *name;	// G=0x32a95bfd; @synthesize=_name
@property(readonly, assign, nonatomic) NSString *typeIdentifier;	// G=0x32a95c0d; @synthesize=_typeIdentifier
+ (id)documentProxyForName:(id)name type:(id)type MIMEType:(id)type3;	// 0x32a95b21
- (id)initWithName:(id)name type:(id)type MIMEType:(id)type3;	// 0x32a95a6d
// declared property getter: - (id)MIMEType;	// 0x32a95c1d
- (void)bind;	// 0x32a94e05
- (void)dealloc;	// 0x32a95b75
- (id)iconStyleDomain;	// 0x32a95bed
// declared property getter: - (id)name;	// 0x32a95bfd
// declared property getter: - (id)typeIdentifier;	// 0x32a95c0d
@end

