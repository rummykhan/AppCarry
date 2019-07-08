//
//  AppCarry.h
//  AppCarry
//
//  Created by Rummy Khan on 6/23/19.
//  Copyright © 2019 Rummy Khan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

//! Project version number for AppCarry.
FOUNDATION_EXPORT double AppCarryVersionNumber;

//! Project version string for AppCarry.
FOUNDATION_EXPORT const unsigned char AppCarryVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <AppCarry/PublicHeader.h>
NSString *const AppCarrySdkVersion = @"0.3.0";

// In app event names
#define KEventAppLaunch                 @"k_event_app_launch"
#define KEventItemView                  @"k_event_item_view"
#define KEventCategoryView              @"k_event_category_view"
#define KEventSubCategoryView           @"k_event_sub_category_view"
#define KEventServiceView               @"k_event_service_view"
#define KEventAddToCart                 @"k_event_add_to_cart"
#define KEventInitiateCheckout          @"k_event_initiate_checkout"
#define KEventPurchase                  @"k_event_purchase"

#define KEventRate                      @"k_event_rate"
#define KEventSearch                    @"k_event_search"
#define KEventAddToWishList             @"k_event_add_to_wish_list"

#define KEventLogin                     @"k_event_login"
#define KEventSignUp                    @"k_event_sign_up"
#define KEventSocialLogin               @"k_event_social_login"
#define KEventTutorialCompletion        @"k_event_tutorial_completion"

#define KEventSubscribe                 @"k_event_subscribe"
#define KEventStartTrial                @"k_event_start_trial"

// In app event parameter names
#define KEventParamContentId               @"k_event_content_id"
#define KEventParamPrice                   @"k_event_price"
#define KEventParamContentType             @"k_event_content_type"
#define KEventParamCurrency                @"k_event_currency"
#define KEventParamQuantity                @"k_event_quantity"
#define KEventParamRegistrationMethod      @"k_event_registration_method"
#define KEventParamCity                    @"k_event_city"
#define KEventParamRegion                  @"k_event_region"
#define KEventParamCountry                 @"k_event_country"
#define KEventParamOrderId                 @"k_event_order_id"


@interface AppCarry : NSObject

@property (class) AppCarry *instance;

@property (assign) NSString * appName;

@property (assign) NSString * appKey;

@property (assign) BOOL isDebug;

+ (NSString *) getSdkVersion;

- (void) testAppCarry;

- (void) trackAppLaunch;

- (void) logEvent: (NSString *)eventName :(NSDictionary *) params;

- (void) logEvent: (NSString *)eventName :(NSDictionary *) params value:(float) value currency:(NSDictionary *) currency;

- (void) logPurchase: (float)value :(NSString *)currency :(NSDictionary *)params;

@end
