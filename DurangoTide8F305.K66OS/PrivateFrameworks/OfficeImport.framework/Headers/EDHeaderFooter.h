/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EDHeaderFooter : NSObject {
@private
	NSString *mHeaderString;	// 4 = 0x4
	NSString *mFooterString;	// 8 = 0x8
}
@property(retain) id footerString;	// G=0x345a906d; S=0x343a32e5; converted property
@property(retain) id headerString;	// G=0x345a905d; S=0x344bfa55; converted property
+ (id)headerFooter;	// 0x345a907d
- (void)dealloc;	// 0x343c92f9
// converted property getter: - (id)footerString;	// 0x345a906d
// converted property getter: - (id)headerString;	// 0x345a905d
// converted property setter: - (void)setFooterString:(id)string;	// 0x343a32e5
// converted property setter: - (void)setHeaderString:(id)string;	// 0x344bfa55
@end

