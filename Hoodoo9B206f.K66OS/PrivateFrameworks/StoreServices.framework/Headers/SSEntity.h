/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"

@class SSXPCConnection, NSDictionary, NSMutableDictionary;

@interface SSEntity : NSObject <SSXPCCoding> {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	NSMutableDictionary *_localExternalValues;	// 12 = 0xc
	NSMutableDictionary *_localValues;	// 16 = 0x10
	long long _pid;	// 20 = 0x14
}
@property(copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary *_localExternalValues;	// G=0x327eef0d; S=0x327ef33d; 
@property(copy, getter=_localValues, setter=_setLocalValues:) NSDictionary *_localValues;	// G=0x327ef0a9; S=0x327ef41d; 
@property(readonly, assign, getter=_isManaged) BOOL _managed;	// G=0x327ef245; 
@property(readonly, assign) long long _persistentIdentifier;	// G=0x327ef321; 
@property(readonly, assign) BOOL exists;	// G=0x327edcf1; 
+ (long long)_existsMessage;	// 0x327eebe9
+ (long long)_getExternalValuesMessage;	// 0x327eebf1
+ (long long)_getValueMessage;	// 0x327eebf9
+ (long long)_setExternalValuesMessage;	// 0x327eec01
+ (long long)_setValuesMessage;	// 0x327eec09
- (id)init;	// 0x327edbad
- (void)_addCachedExternalValues:(id)values;	// 0x327eec11
- (void)_addCachedPropertyValues:(id)values;	// 0x327eed11
- (void)_becomeManagedOnConnection:(id)connection;	// 0x327eee11
- (id)_clientValueForProperty:(id)property databaseValue:(id)value;	// 0x327eef09
- (void)_getValues:(id *)values forProperties:(id *)properties count:(unsigned)count message:(long long)message;	// 0x327ef4fd
- (id)_initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x327edbfd
// declared property getter: - (BOOL)_isManaged;	// 0x327ef245
// declared property getter: - (id)_localExternalValues;	// 0x327eef0d
// declared property getter: - (id)_localValues;	// 0x327ef0a9
// declared property getter: - (long long)_persistentIdentifier;	// 0x327ef321
- (void)_resetLocalIVars;	// 0x327ef339
// declared property setter: - (void)_setLocalExternalValues:(id)values;	// 0x327ef33d
// declared property setter: - (void)_setLocalValues:(id)values;	// 0x327ef41d
- (void *)copyXPCEncoding;	// 0x327efa0d
- (void)dealloc;	// 0x327edc65
- (id)description;	// 0x327eeb05
// declared property getter: - (BOOL)exists;	// 0x327edcf1
- (void)getValues:(id *)values forExternalProperties:(id *)externalProperties count:(unsigned)count;	// 0x327ee511
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x327ee025
- (unsigned)hash;	// 0x327eeb75
- (BOOL)isEqual:(id)equal;	// 0x327eeb85
- (void)resetCachedExternalProperties:(id *)properties count:(unsigned)count;	// 0x327ee569
- (void)resetCachedProperties:(id *)properties count:(unsigned)count;	// 0x327ee63d
- (BOOL)setExternalValuesWithDictionary:(id)dictionary;	// 0x327ee711
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x327ee07d
- (BOOL)setValuesWithDictionary:(id)dictionary;	// 0x327ee11d
- (id)valueForExternalProperty:(id)externalProperty;	// 0x327eead9
- (id)valueForProperty:(id)property;	// 0x327ee4e5
@end
