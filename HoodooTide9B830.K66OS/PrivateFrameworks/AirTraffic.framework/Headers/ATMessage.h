/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSData, NSDictionary, NSString;

@interface ATMessage : NSObject {
	unsigned _session;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSDictionary *_params;	// 12 = 0xc
	NSData *_sig;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *name;	// G=0x3609b001; S=0x3609b011; @synthesize=_name
@property(retain, nonatomic) NSDictionary *parameters;	// G=0x3609b035; S=0x3609b045; @synthesize=_params
@property(readonly, assign, nonatomic) unsigned sessionNumber;	// G=0x3609b069; @synthesize=_session
@property(retain, nonatomic) NSData *sig;	// G=0x3609b079; S=0x3609b089; @synthesize=_sig
+ (unsigned)currentSessionNumber;	// 0x3609aa95
+ (id)messageFromData:(id)data;	// 0x3609abcd
+ (id)messageFromDictionary:(id)dictionary;	// 0x3609aad5
+ (id)messageWithName:(id)name parameters:(id)parameters;	// 0x3609ae65
+ (unsigned)nextSessionNumber;	// 0x3609aa81
+ (void)setSessionNumber:(unsigned)number;	// 0x3609aaa5
- (id)initWithDictionary:(id)dictionary;	// 0x3609ad69
- (id)data;	// 0x3609ad29
- (void)dealloc;	// 0x3609aef5
- (id)description;	// 0x3609af69
- (id)dictionary;	// 0x3609ac5d
// declared property getter: - (id)name;	// 0x3609b001
- (id)parameterForKey:(id)key;	// 0x3609aab5
// declared property getter: - (id)parameters;	// 0x3609b035
// declared property getter: - (unsigned)sessionNumber;	// 0x3609b069
// declared property setter: - (void)setName:(id)name;	// 0x3609b011
// declared property setter: - (void)setParameters:(id)parameters;	// 0x3609b045
// declared property setter: - (void)setSig:(id)sig;	// 0x3609b089
// declared property getter: - (id)sig;	// 0x3609b079
@end

