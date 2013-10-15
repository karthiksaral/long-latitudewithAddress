//
//  ViewController.h
//  currlocandAddress
//
//  Created by PasumaiSolutions on 10/15/13.
//  Copyright (c) 2013 PasumaiSolutions. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController <CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    //find the Address
    CLGeocoder *geocoder;
    CLPlacemark *placemark;
}

@property (strong, nonatomic) IBOutlet UILabel *latitudeLabel;
@property (strong, nonatomic) IBOutlet UILabel *longitudeLabel;
@property (strong, nonatomic) IBOutlet UILabel *addressLabel;



- (IBAction)getCurrLocation:(id)sender;


@end
