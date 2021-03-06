/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "NSObject.h"
#import "CoreDAVItem.h"
#import <NSObject.h> // Unknown library

@class NSData, NSMutableSet, NSString, NSMutableArray;

@protocol CoreDAVItem <NSObject>
- (id)copyParseRules;
- (void)parserFoundAttributes:(id)attributes;
- (void)parserFoundPayload:(id)payload;
- (void)parserFoundUnrecognizedElement:(id)element;
- (void)parserSuggestsBaseURL:(id)url;
- (BOOL)validate;
- (void)write:(id)write;
@end

@interface CoreDAVItem : NSObject <CoreDAVItem> {
	NSString *_name;	// 4 = 0x4
	NSString *_nameSpace;	// 8 = 0x8
	NSMutableSet *_attributes;	// 12 = 0xc
	NSMutableArray *_extraChildItems;	// 16 = 0x10
	NSData *_payload;	// 20 = 0x14
}
@property(retain) NSMutableSet *attributes;	// G=0x35dd6809; S=0x35dd681d; @synthesize=_attributes
@property(retain) NSMutableArray *extraChildItems;	// G=0x35dd6841; S=0x35dd6855; @synthesize=_extraChildItems
@property(retain) NSString *name;	// G=0x35dd6799; S=0x35dd67ad; @synthesize=_name
@property(retain) NSString *nameSpace;	// G=0x35dd67d1; S=0x35dd67e5; @synthesize=_nameSpace
@property(retain) NSData *payload;	// G=0x35dd6879; S=0x35dd688d; @synthesize=_payload
@property(retain) id payloadAsString;	// G=0x35dd6659; S=0x35dd66b9; converted property
- (id)init;	// 0x35dd60e9
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35dd60ed
// declared property getter: - (id)attributes;	// 0x35dd6809
- (id)childrenToWrite;	// 0x35dd64cd
- (id)copyParseRules;	// 0x35dd6449
- (void)dealloc;	// 0x35dd61e9
- (id)description;	// 0x35dd6285
// declared property getter: - (id)extraChildItems;	// 0x35dd6841
- (id)generateXMLString;	// 0x35dd66f1
- (id)hashString;	// 0x35dd6345
// declared property getter: - (id)name;	// 0x35dd6799
// declared property getter: - (id)nameSpace;	// 0x35dd67d1
- (void)parserFoundAttributes:(id)attributes;	// 0x35dd6489
- (void)parserFoundPayload:(id)payload;	// 0x35dd6479
- (void)parserFoundUnrecognizedElement:(id)element;	// 0x35dd644d
- (void)parserSuggestsBaseURL:(id)url;	// 0x35dd66ed
// declared property getter: - (id)payload;	// 0x35dd6879
// converted property getter: - (id)payloadAsString;	// 0x35dd6659
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x35dd681d
// declared property setter: - (void)setExtraChildItems:(id)items;	// 0x35dd6855
// declared property setter: - (void)setName:(id)name;	// 0x35dd67ad
// declared property setter: - (void)setNameSpace:(id)space;	// 0x35dd67e5
// declared property setter: - (void)setPayload:(id)payload;	// 0x35dd688d
// converted property setter: - (void)setPayloadAsString:(id)string;	// 0x35dd66b9
- (BOOL)validate;	// 0x35dd6655
- (void)write:(id)write;	// 0x35dd64dd
@end

