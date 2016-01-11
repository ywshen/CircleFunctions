template <class T>
	class circle {
		public:
			circle(T val1 = 0, T val2 = 0, T val3 = 0, T val4 = 0);
			double radius();
			double circumference();
			double area();
			void populate_classobj(T x1, T y1, T x2, T y2);
		protected:
			double distance();
		private:
			T x1;
			T y1;
			T x2;
			T y2;
};

