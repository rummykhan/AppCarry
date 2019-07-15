
Pod::Spec.new do |spec|

  spec.name         = "AppCarry"
  spec.version      = "0.9.0"
  spec.summary      = "AppCarry IOS SDK"

  spec.description  = <<-DESC
  AppCarry is IOS SDK for Mobile events tracking.
                   DESC

  spec.homepage     = "https://github.com/rummykhan/AppCarry"
  
  spec.license      = { :type => "MIT", :file => "LICENSE" }

  spec.author       = { "Rehan Manzoor" => "rehan_manzoor@outlook.com" }

  spec.platform     = :ios, "10.0"

  spec.source       = { :git => "https://github.com/rummykhan/AppCarry.git", :tag => spec.version.to_s }

  spec.vendored_frameworks = 'AppCarry.framework'
end
