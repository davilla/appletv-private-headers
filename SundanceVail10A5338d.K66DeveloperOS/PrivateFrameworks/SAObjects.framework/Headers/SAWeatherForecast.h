/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class SAWeatherCondition, NSNumber;

@interface SAWeatherForecast : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *chanceOfPrecipitation;	// G=0x3796513d; S=0x37965159; 
@property(retain, nonatomic) SAWeatherCondition *condition;	// G=0x379651a9; S=0x379651fd; 
@property(copy, nonatomic) NSNumber *isUserRequested;	// G=0x37965239; S=0x37965255; 
@property(copy, nonatomic) NSNumber *timeIndex;	// G=0x379652a5; S=0x379652c1; 
+ (id)forecast;	// 0x379650ad
+ (id)forecastWithDictionary:(id)dictionary context:(id)context;	// 0x379650f1
// declared property getter: - (id)chanceOfPrecipitation;	// 0x3796513d
// declared property getter: - (id)condition;	// 0x379651a9
- (id)encodedClassName;	// 0x379650a1
- (id)groupIdentifier;	// 0x37965091
// declared property getter: - (id)isUserRequested;	// 0x37965239
// declared property setter: - (void)setChanceOfPrecipitation:(id)precipitation;	// 0x37965159
// declared property setter: - (void)setCondition:(id)condition;	// 0x379651fd
// declared property setter: - (void)setIsUserRequested:(id)requested;	// 0x37965255
// declared property setter: - (void)setTimeIndex:(id)index;	// 0x379652c1
// declared property getter: - (id)timeIndex;	// 0x379652a5
@end

